// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "accepteulasresponse.h"
#include "accepteulasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::AcceptEulasResponse
 * \brief The AcceptEulasResponse class provides an interace for Nimble AcceptEulas responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::acceptEulas
 */

/*!
 * Constructs a AcceptEulasResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptEulasResponse::AcceptEulasResponse(
        const AcceptEulasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new AcceptEulasResponsePrivate(this), parent)
{
    setRequest(new AcceptEulasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptEulasRequest * AcceptEulasResponse::request() const
{
    Q_D(const AcceptEulasResponse);
    return static_cast<const AcceptEulasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble AcceptEulas \a response.
 */
void AcceptEulasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptEulasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::AcceptEulasResponsePrivate
 * \brief The AcceptEulasResponsePrivate class provides private implementation for AcceptEulasResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a AcceptEulasResponsePrivate object with public implementation \a q.
 */
AcceptEulasResponsePrivate::AcceptEulasResponsePrivate(
    AcceptEulasResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble AcceptEulas response element from \a xml.
 */
void AcceptEulasResponsePrivate::parseAcceptEulasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptEulasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
