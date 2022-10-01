// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listartifactsresponse.h"
#include "listartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListArtifactsResponse
 * \brief The ListArtifactsResponse class provides an interace for Amplify ListArtifacts responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listArtifacts
 */

/*!
 * Constructs a ListArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListArtifactsResponse::ListArtifactsResponse(
        const ListArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListArtifactsRequest * ListArtifactsResponse::request() const
{
    Q_D(const ListArtifactsResponse);
    return static_cast<const ListArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListArtifacts \a response.
 */
void ListArtifactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListArtifactsResponsePrivate
 * \brief The ListArtifactsResponsePrivate class provides private implementation for ListArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListArtifactsResponsePrivate object with public implementation \a q.
 */
ListArtifactsResponsePrivate::ListArtifactsResponsePrivate(
    ListArtifactsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListArtifacts response element from \a xml.
 */
void ListArtifactsResponsePrivate::parseListArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListArtifactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
