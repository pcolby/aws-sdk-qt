// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETRESPONSE_H
#define QTAWS_DELETEDATASETRESPONSE_H

#include "quicksightresponse.h"
#include "deletedatasetrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteDataSetResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteDataSetResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteDataSetResponse(const DeleteDataSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataSetResponse)
    Q_DISABLE_COPY(DeleteDataSetResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
