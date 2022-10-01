// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERRESPONSE_H
#define QTAWS_CREATEFOLDERRESPONSE_H

#include "quicksightresponse.h"
#include "createfolderrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateFolderResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateFolderResponse(const CreateFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFolderResponse)
    Q_DISABLE_COPY(CreateFolderResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
