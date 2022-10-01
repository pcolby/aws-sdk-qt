// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "decreasereplicationfactorresponse.h"
#include "decreasereplicationfactorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DecreaseReplicationFactorResponse
 * \brief The DecreaseReplicationFactorResponse class provides an interace for Dax DecreaseReplicationFactor responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::decreaseReplicationFactor
 */

/*!
 * Constructs a DecreaseReplicationFactorResponse object for \a reply to \a request, with parent \a parent.
 */
DecreaseReplicationFactorResponse::DecreaseReplicationFactorResponse(
        const DecreaseReplicationFactorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DecreaseReplicationFactorResponsePrivate(this), parent)
{
    setRequest(new DecreaseReplicationFactorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DecreaseReplicationFactorRequest * DecreaseReplicationFactorResponse::request() const
{
    Q_D(const DecreaseReplicationFactorResponse);
    return static_cast<const DecreaseReplicationFactorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DecreaseReplicationFactor \a response.
 */
void DecreaseReplicationFactorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DecreaseReplicationFactorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DecreaseReplicationFactorResponsePrivate
 * \brief The DecreaseReplicationFactorResponsePrivate class provides private implementation for DecreaseReplicationFactorResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DecreaseReplicationFactorResponsePrivate object with public implementation \a q.
 */
DecreaseReplicationFactorResponsePrivate::DecreaseReplicationFactorResponsePrivate(
    DecreaseReplicationFactorResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DecreaseReplicationFactor response element from \a xml.
 */
void DecreaseReplicationFactorResponsePrivate::parseDecreaseReplicationFactorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecreaseReplicationFactorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
