// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEALIASRESPONSE_H
#define QTAWS_UPDATETEMPLATEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "updatetemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateTemplateAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateTemplateAliasResponse(const UpdateTemplateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTemplateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateAliasResponse)
    Q_DISABLE_COPY(UpdateTemplateAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
