// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMERESPONSE_H
#define QTAWS_UPDATETHEMERESPONSE_H

#include "quicksightresponse.h"
#include "updatethemerequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemeResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateThemeResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateThemeResponse(const UpdateThemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemeResponse)
    Q_DISABLE_COPY(UpdateThemeResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
