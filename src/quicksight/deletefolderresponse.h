// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERRESPONSE_H
#define QTAWS_DELETEFOLDERRESPONSE_H

#include "quicksightresponse.h"
#include "deletefolderrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteFolderResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteFolderResponse(const DeleteFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFolderResponse)
    Q_DISABLE_COPY(DeleteFolderResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
