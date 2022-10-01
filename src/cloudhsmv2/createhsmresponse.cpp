// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhsmresponse.h"
#include "createhsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CreateHsmResponse
 * \brief The CreateHsmResponse class provides an interace for CloudHsmV2 CreateHsm responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::createHsm
 */

/*!
 * Constructs a CreateHsmResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHsmResponse::CreateHsmResponse(
        const CreateHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new CreateHsmResponsePrivate(this), parent)
{
    setRequest(new CreateHsmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHsmRequest * CreateHsmResponse::request() const
{
    Q_D(const CreateHsmResponse);
    return static_cast<const CreateHsmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 CreateHsm \a response.
 */
void CreateHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::CreateHsmResponsePrivate
 * \brief The CreateHsmResponsePrivate class provides private implementation for CreateHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CreateHsmResponsePrivate object with public implementation \a q.
 */
CreateHsmResponsePrivate::CreateHsmResponsePrivate(
    CreateHsmResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 CreateHsm response element from \a xml.
 */
void CreateHsmResponsePrivate::parseCreateHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
