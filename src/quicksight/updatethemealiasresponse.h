// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEALIASRESPONSE_H
#define QTAWS_UPDATETHEMEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "updatethemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemeAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateThemeAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateThemeAliasResponse(const UpdateThemeAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThemeAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemeAliasResponse)
    Q_DISABLE_COPY(UpdateThemeAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
