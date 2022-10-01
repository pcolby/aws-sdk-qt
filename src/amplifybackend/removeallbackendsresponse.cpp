// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeallbackendsresponse.h"
#include "removeallbackendsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsResponse
 * \brief The RemoveAllBackendsResponse class provides an interace for AmplifyBackend RemoveAllBackends responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeAllBackends
 */

/*!
 * Constructs a RemoveAllBackendsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAllBackendsResponse::RemoveAllBackendsResponse(
        const RemoveAllBackendsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new RemoveAllBackendsResponsePrivate(this), parent)
{
    setRequest(new RemoveAllBackendsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAllBackendsRequest * RemoveAllBackendsResponse::request() const
{
    Q_D(const RemoveAllBackendsResponse);
    return static_cast<const RemoveAllBackendsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend RemoveAllBackends \a response.
 */
void RemoveAllBackendsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAllBackendsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsResponsePrivate
 * \brief The RemoveAllBackendsResponsePrivate class provides private implementation for RemoveAllBackendsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveAllBackendsResponsePrivate object with public implementation \a q.
 */
RemoveAllBackendsResponsePrivate::RemoveAllBackendsResponsePrivate(
    RemoveAllBackendsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend RemoveAllBackends response element from \a xml.
 */
void RemoveAllBackendsResponsePrivate::parseRemoveAllBackendsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAllBackendsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
