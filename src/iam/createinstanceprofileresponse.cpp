// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinstanceprofileresponse.h"
#include "createinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateInstanceProfileResponse
 * \brief The CreateInstanceProfileResponse class provides an interace for Iam CreateInstanceProfile responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::createInstanceProfile
 */

/*!
 * Constructs a CreateInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInstanceProfileResponse::CreateInstanceProfileResponse(
        const CreateInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInstanceProfileRequest * CreateInstanceProfileResponse::request() const
{
    Q_D(const CreateInstanceProfileResponse);
    return static_cast<const CreateInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateInstanceProfile \a response.
 */
void CreateInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateInstanceProfileResponsePrivate
 * \brief The CreateInstanceProfileResponsePrivate class provides private implementation for CreateInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateInstanceProfileResponsePrivate object with public implementation \a q.
 */
CreateInstanceProfileResponsePrivate::CreateInstanceProfileResponsePrivate(
    CreateInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateInstanceProfile response element from \a xml.
 */
void CreateInstanceProfileResponsePrivate::parseCreateInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
