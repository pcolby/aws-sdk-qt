// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappresponse.h"
#include "deleteappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteAppResponse
 * \brief The DeleteAppResponse class provides an interace for Amplify DeleteApp responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteApp
 */

/*!
 * Constructs a DeleteAppResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppResponse::DeleteAppResponse(
        const DeleteAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteAppResponsePrivate(this), parent)
{
    setRequest(new DeleteAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppRequest * DeleteAppResponse::request() const
{
    Q_D(const DeleteAppResponse);
    return static_cast<const DeleteAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteApp \a response.
 */
void DeleteAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteAppResponsePrivate
 * \brief The DeleteAppResponsePrivate class provides private implementation for DeleteAppResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteAppResponsePrivate object with public implementation \a q.
 */
DeleteAppResponsePrivate::DeleteAppResponsePrivate(
    DeleteAppResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteApp response element from \a xml.
 */
void DeleteAppResponsePrivate::parseDeleteAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
