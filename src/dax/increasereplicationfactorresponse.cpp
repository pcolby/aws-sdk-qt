// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "increasereplicationfactorresponse.h"
#include "increasereplicationfactorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::IncreaseReplicationFactorResponse
 * \brief The IncreaseReplicationFactorResponse class provides an interace for Dax IncreaseReplicationFactor responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::increaseReplicationFactor
 */

/*!
 * Constructs a IncreaseReplicationFactorResponse object for \a reply to \a request, with parent \a parent.
 */
IncreaseReplicationFactorResponse::IncreaseReplicationFactorResponse(
        const IncreaseReplicationFactorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new IncreaseReplicationFactorResponsePrivate(this), parent)
{
    setRequest(new IncreaseReplicationFactorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IncreaseReplicationFactorRequest * IncreaseReplicationFactorResponse::request() const
{
    Q_D(const IncreaseReplicationFactorResponse);
    return static_cast<const IncreaseReplicationFactorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax IncreaseReplicationFactor \a response.
 */
void IncreaseReplicationFactorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(IncreaseReplicationFactorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::IncreaseReplicationFactorResponsePrivate
 * \brief The IncreaseReplicationFactorResponsePrivate class provides private implementation for IncreaseReplicationFactorResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a IncreaseReplicationFactorResponsePrivate object with public implementation \a q.
 */
IncreaseReplicationFactorResponsePrivate::IncreaseReplicationFactorResponsePrivate(
    IncreaseReplicationFactorResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax IncreaseReplicationFactor response element from \a xml.
 */
void IncreaseReplicationFactorResponsePrivate::parseIncreaseReplicationFactorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IncreaseReplicationFactorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
