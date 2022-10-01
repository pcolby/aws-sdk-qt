// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEALIASESRESPONSE_H
#define QTAWS_LISTTEMPLATEALIASESRESPONSE_H

#include "quicksightresponse.h"
#include "listtemplatealiasesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateAliasesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListTemplateAliasesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListTemplateAliasesResponse(const ListTemplateAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTemplateAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplateAliasesResponse)
    Q_DISABLE_COPY(ListTemplateAliasesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
