// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMERESPONSE_H
#define QTAWS_DELETETHEMERESPONSE_H

#include "quicksightresponse.h"
#include "deletethemerequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteThemeResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteThemeResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteThemeResponse(const DeleteThemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThemeResponse)
    Q_DISABLE_COPY(DeleteThemeResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
