// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEALIASRESPONSE_H
#define QTAWS_CREATETHEMEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "createthemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateThemeAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateThemeAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateThemeAliasResponse(const CreateThemeAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateThemeAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThemeAliasResponse)
    Q_DISABLE_COPY(CreateThemeAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
