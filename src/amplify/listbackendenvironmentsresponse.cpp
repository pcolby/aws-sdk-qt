// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackendenvironmentsresponse.h"
#include "listbackendenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListBackendEnvironmentsResponse
 * \brief The ListBackendEnvironmentsResponse class provides an interace for Amplify ListBackendEnvironments responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listBackendEnvironments
 */

/*!
 * Constructs a ListBackendEnvironmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackendEnvironmentsResponse::ListBackendEnvironmentsResponse(
        const ListBackendEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListBackendEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ListBackendEnvironmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackendEnvironmentsRequest * ListBackendEnvironmentsResponse::request() const
{
    Q_D(const ListBackendEnvironmentsResponse);
    return static_cast<const ListBackendEnvironmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListBackendEnvironments \a response.
 */
void ListBackendEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackendEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListBackendEnvironmentsResponsePrivate
 * \brief The ListBackendEnvironmentsResponsePrivate class provides private implementation for ListBackendEnvironmentsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListBackendEnvironmentsResponsePrivate object with public implementation \a q.
 */
ListBackendEnvironmentsResponsePrivate::ListBackendEnvironmentsResponsePrivate(
    ListBackendEnvironmentsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListBackendEnvironments response element from \a xml.
 */
void ListBackendEnvironmentsResponsePrivate::parseListBackendEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackendEnvironmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
