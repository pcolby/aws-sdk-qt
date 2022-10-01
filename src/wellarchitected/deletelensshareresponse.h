// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSSHARERESPONSE_H
#define QTAWS_DELETELENSSHARERESPONSE_H

#include "wellarchitectedresponse.h"
#include "deletelenssharerequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensShareResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteLensShareResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    DeleteLensShareResponse(const DeleteLensShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLensShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLensShareResponse)
    Q_DISABLE_COPY(DeleteLensShareResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
