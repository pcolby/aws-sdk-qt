// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "settagsforresourceresponse.h"
#include "settagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SetTagsForResourceResponse
 * \brief The SetTagsForResourceResponse class provides an interace for Inspector SetTagsForResource responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::setTagsForResource
 */

/*!
 * Constructs a SetTagsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
SetTagsForResourceResponse::SetTagsForResourceResponse(
        const SetTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new SetTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new SetTagsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetTagsForResourceRequest * SetTagsForResourceResponse::request() const
{
    Q_D(const SetTagsForResourceResponse);
    return static_cast<const SetTagsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector SetTagsForResource \a response.
 */
void SetTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::SetTagsForResourceResponsePrivate
 * \brief The SetTagsForResourceResponsePrivate class provides private implementation for SetTagsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a SetTagsForResourceResponsePrivate object with public implementation \a q.
 */
SetTagsForResourceResponsePrivate::SetTagsForResourceResponsePrivate(
    SetTagsForResourceResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector SetTagsForResource response element from \a xml.
 */
void SetTagsForResourceResponsePrivate::parseSetTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTagsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
