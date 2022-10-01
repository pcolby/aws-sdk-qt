// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbranchresponse.h"
#include "getbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetBranchResponse
 * \brief The GetBranchResponse class provides an interace for Amplify GetBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getBranch
 */

/*!
 * Constructs a GetBranchResponse object for \a reply to \a request, with parent \a parent.
 */
GetBranchResponse::GetBranchResponse(
        const GetBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetBranchResponsePrivate(this), parent)
{
    setRequest(new GetBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBranchRequest * GetBranchResponse::request() const
{
    Q_D(const GetBranchResponse);
    return static_cast<const GetBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetBranch \a response.
 */
void GetBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetBranchResponsePrivate
 * \brief The GetBranchResponsePrivate class provides private implementation for GetBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetBranchResponsePrivate object with public implementation \a q.
 */
GetBranchResponsePrivate::GetBranchResponsePrivate(
    GetBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetBranch response element from \a xml.
 */
void GetBranchResponsePrivate::parseGetBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
