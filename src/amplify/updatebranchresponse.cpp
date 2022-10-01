// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebranchresponse.h"
#include "updatebranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateBranchResponse
 * \brief The UpdateBranchResponse class provides an interace for Amplify UpdateBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateBranch
 */

/*!
 * Constructs a UpdateBranchResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBranchResponse::UpdateBranchResponse(
        const UpdateBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateBranchResponsePrivate(this), parent)
{
    setRequest(new UpdateBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBranchRequest * UpdateBranchResponse::request() const
{
    Q_D(const UpdateBranchResponse);
    return static_cast<const UpdateBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify UpdateBranch \a response.
 */
void UpdateBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateBranchResponsePrivate
 * \brief The UpdateBranchResponsePrivate class provides private implementation for UpdateBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateBranchResponsePrivate object with public implementation \a q.
 */
UpdateBranchResponsePrivate::UpdateBranchResponsePrivate(
    UpdateBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateBranch response element from \a xml.
 */
void UpdateBranchResponsePrivate::parseUpdateBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
