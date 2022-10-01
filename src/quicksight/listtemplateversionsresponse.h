// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEVERSIONSRESPONSE_H
#define QTAWS_LISTTEMPLATEVERSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "listtemplateversionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateVersionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListTemplateVersionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListTemplateVersionsResponse(const ListTemplateVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTemplateVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplateVersionsResponse)
    Q_DISABLE_COPY(ListTemplateVersionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
