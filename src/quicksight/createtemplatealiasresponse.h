// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEALIASRESPONSE_H
#define QTAWS_CREATETEMPLATEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "createtemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateTemplateAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateTemplateAliasResponse(const CreateTemplateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTemplateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTemplateAliasResponse)
    Q_DISABLE_COPY(CreateTemplateAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
