// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEALIASRESPONSE_H
#define QTAWS_DELETETEMPLATEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "deletetemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteTemplateAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteTemplateAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteTemplateAliasResponse(const DeleteTemplateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTemplateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTemplateAliasResponse)
    Q_DISABLE_COPY(DeleteTemplateAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
