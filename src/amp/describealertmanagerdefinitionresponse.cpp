// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealertmanagerdefinitionresponse.h"
#include "describealertmanagerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeAlertManagerDefinitionResponse
 * \brief The DescribeAlertManagerDefinitionResponse class provides an interace for Amp DescribeAlertManagerDefinition responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeAlertManagerDefinition
 */

/*!
 * Constructs a DescribeAlertManagerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlertManagerDefinitionResponse::DescribeAlertManagerDefinitionResponse(
        const DescribeAlertManagerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DescribeAlertManagerDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeAlertManagerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlertManagerDefinitionRequest * DescribeAlertManagerDefinitionResponse::request() const
{
    Q_D(const DescribeAlertManagerDefinitionResponse);
    return static_cast<const DescribeAlertManagerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DescribeAlertManagerDefinition \a response.
 */
void DescribeAlertManagerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlertManagerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DescribeAlertManagerDefinitionResponsePrivate
 * \brief The DescribeAlertManagerDefinitionResponsePrivate class provides private implementation for DescribeAlertManagerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeAlertManagerDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeAlertManagerDefinitionResponsePrivate::DescribeAlertManagerDefinitionResponsePrivate(
    DescribeAlertManagerDefinitionResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DescribeAlertManagerDefinition response element from \a xml.
 */
void DescribeAlertManagerDefinitionResponsePrivate::parseDescribeAlertManagerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlertManagerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
