// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putblockpublicaccessconfigurationresponse.h"
#include "putblockpublicaccessconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutBlockPublicAccessConfigurationResponse
 * \brief The PutBlockPublicAccessConfigurationResponse class provides an interace for Emr PutBlockPublicAccessConfiguration responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putBlockPublicAccessConfiguration
 */

/*!
 * Constructs a PutBlockPublicAccessConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBlockPublicAccessConfigurationResponse::PutBlockPublicAccessConfigurationResponse(
        const PutBlockPublicAccessConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new PutBlockPublicAccessConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBlockPublicAccessConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBlockPublicAccessConfigurationRequest * PutBlockPublicAccessConfigurationResponse::request() const
{
    Q_D(const PutBlockPublicAccessConfigurationResponse);
    return static_cast<const PutBlockPublicAccessConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr PutBlockPublicAccessConfiguration \a response.
 */
void PutBlockPublicAccessConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBlockPublicAccessConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::PutBlockPublicAccessConfigurationResponsePrivate
 * \brief The PutBlockPublicAccessConfigurationResponsePrivate class provides private implementation for PutBlockPublicAccessConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutBlockPublicAccessConfigurationResponsePrivate object with public implementation \a q.
 */
PutBlockPublicAccessConfigurationResponsePrivate::PutBlockPublicAccessConfigurationResponsePrivate(
    PutBlockPublicAccessConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr PutBlockPublicAccessConfiguration response element from \a xml.
 */
void PutBlockPublicAccessConfigurationResponsePrivate::parsePutBlockPublicAccessConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBlockPublicAccessConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
