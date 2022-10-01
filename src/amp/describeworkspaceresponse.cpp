// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkspaceresponse.h"
#include "describeworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeWorkspaceResponse
 * \brief The DescribeWorkspaceResponse class provides an interace for Amp DescribeWorkspace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeWorkspace
 */

/*!
 * Constructs a DescribeWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceResponse::DescribeWorkspaceResponse(
        const DescribeWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DescribeWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceRequest * DescribeWorkspaceResponse::request() const
{
    Q_D(const DescribeWorkspaceResponse);
    return static_cast<const DescribeWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DescribeWorkspace \a response.
 */
void DescribeWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DescribeWorkspaceResponsePrivate
 * \brief The DescribeWorkspaceResponsePrivate class provides private implementation for DescribeWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeWorkspaceResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceResponsePrivate::DescribeWorkspaceResponsePrivate(
    DescribeWorkspaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DescribeWorkspace response element from \a xml.
 */
void DescribeWorkspaceResponsePrivate::parseDescribeWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
