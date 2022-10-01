// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEALIASRESPONSE_H
#define QTAWS_DELETETHEMEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "deletethemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteThemeAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteThemeAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteThemeAliasResponse(const DeleteThemeAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThemeAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThemeAliasResponse)
    Q_DISABLE_COPY(DeleteThemeAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
