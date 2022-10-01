// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourceresponse.h"
#include "untagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::UntagResourceResponse
 * \brief The UntagResourceResponse class provides an interace for MigrationHubRefactorSpaces UntagResource responses.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::untagResource
 */

/*!
 * Constructs a UntagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UntagResourceResponse::UntagResourceResponse(
        const UntagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new UntagResourceResponsePrivate(this), parent)
{
    setRequest(new UntagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagResourceRequest * UntagResourceResponse::request() const
{
    Q_D(const UntagResourceResponse);
    return static_cast<const UntagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces UntagResource \a response.
 */
void UntagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::UntagResourceResponsePrivate
 * \brief The UntagResourceResponsePrivate class provides private implementation for UntagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a UntagResourceResponsePrivate object with public implementation \a q.
 */
UntagResourceResponsePrivate::UntagResourceResponsePrivate(
    UntagResourceResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces UntagResource response element from \a xml.
 */
void UntagResourceResponsePrivate::parseUntagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
