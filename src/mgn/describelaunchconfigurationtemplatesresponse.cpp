// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelaunchconfigurationtemplatesresponse.h"
#include "describelaunchconfigurationtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeLaunchConfigurationTemplatesResponse
 * \brief The DescribeLaunchConfigurationTemplatesResponse class provides an interace for Mgn DescribeLaunchConfigurationTemplates responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeLaunchConfigurationTemplates
 */

/*!
 * Constructs a DescribeLaunchConfigurationTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLaunchConfigurationTemplatesResponse::DescribeLaunchConfigurationTemplatesResponse(
        const DescribeLaunchConfigurationTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DescribeLaunchConfigurationTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchConfigurationTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLaunchConfigurationTemplatesRequest * DescribeLaunchConfigurationTemplatesResponse::request() const
{
    Q_D(const DescribeLaunchConfigurationTemplatesResponse);
    return static_cast<const DescribeLaunchConfigurationTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DescribeLaunchConfigurationTemplates \a response.
 */
void DescribeLaunchConfigurationTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLaunchConfigurationTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DescribeLaunchConfigurationTemplatesResponsePrivate
 * \brief The DescribeLaunchConfigurationTemplatesResponsePrivate class provides private implementation for DescribeLaunchConfigurationTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeLaunchConfigurationTemplatesResponsePrivate object with public implementation \a q.
 */
DescribeLaunchConfigurationTemplatesResponsePrivate::DescribeLaunchConfigurationTemplatesResponsePrivate(
    DescribeLaunchConfigurationTemplatesResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DescribeLaunchConfigurationTemplates response element from \a xml.
 */
void DescribeLaunchConfigurationTemplatesResponsePrivate::parseDescribeLaunchConfigurationTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchConfigurationTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
