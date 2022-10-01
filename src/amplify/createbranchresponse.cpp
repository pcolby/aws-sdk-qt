// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbranchresponse.h"
#include "createbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateBranchResponse
 * \brief The CreateBranchResponse class provides an interace for Amplify CreateBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createBranch
 */

/*!
 * Constructs a CreateBranchResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBranchResponse::CreateBranchResponse(
        const CreateBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateBranchResponsePrivate(this), parent)
{
    setRequest(new CreateBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBranchRequest * CreateBranchResponse::request() const
{
    Q_D(const CreateBranchResponse);
    return static_cast<const CreateBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateBranch \a response.
 */
void CreateBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateBranchResponsePrivate
 * \brief The CreateBranchResponsePrivate class provides private implementation for CreateBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateBranchResponsePrivate object with public implementation \a q.
 */
CreateBranchResponsePrivate::CreateBranchResponsePrivate(
    CreateBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateBranch response element from \a xml.
 */
void CreateBranchResponsePrivate::parseCreateBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
