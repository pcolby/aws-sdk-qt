// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebranchresponse.h"
#include "deletebranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteBranchResponse
 * \brief The DeleteBranchResponse class provides an interace for Amplify DeleteBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteBranch
 */

/*!
 * Constructs a DeleteBranchResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBranchResponse::DeleteBranchResponse(
        const DeleteBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteBranchResponsePrivate(this), parent)
{
    setRequest(new DeleteBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBranchRequest * DeleteBranchResponse::request() const
{
    Q_D(const DeleteBranchResponse);
    return static_cast<const DeleteBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteBranch \a response.
 */
void DeleteBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteBranchResponsePrivate
 * \brief The DeleteBranchResponsePrivate class provides private implementation for DeleteBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteBranchResponsePrivate object with public implementation \a q.
 */
DeleteBranchResponsePrivate::DeleteBranchResponsePrivate(
    DeleteBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteBranch response element from \a xml.
 */
void DeleteBranchResponsePrivate::parseDeleteBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
