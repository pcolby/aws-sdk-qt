// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbranchesresponse.h"
#include "listbranchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListBranchesResponse
 * \brief The ListBranchesResponse class provides an interace for Amplify ListBranches responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listBranches
 */

/*!
 * Constructs a ListBranchesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBranchesResponse::ListBranchesResponse(
        const ListBranchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListBranchesResponsePrivate(this), parent)
{
    setRequest(new ListBranchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBranchesRequest * ListBranchesResponse::request() const
{
    Q_D(const ListBranchesResponse);
    return static_cast<const ListBranchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListBranches \a response.
 */
void ListBranchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBranchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListBranchesResponsePrivate
 * \brief The ListBranchesResponsePrivate class provides private implementation for ListBranchesResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListBranchesResponsePrivate object with public implementation \a q.
 */
ListBranchesResponsePrivate::ListBranchesResponsePrivate(
    ListBranchesResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListBranches response element from \a xml.
 */
void ListBranchesResponsePrivate::parseListBranchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBranchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
