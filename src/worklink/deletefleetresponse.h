// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETRESPONSE_H
#define QTAWS_DELETEFLEETRESPONSE_H

#include "worklinkresponse.h"
#include "deletefleetrequest.h"

namespace QtAws {
namespace WorkLink {

class DeleteFleetResponsePrivate;

class QTAWSWORKLINK_EXPORT DeleteFleetResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DeleteFleetResponse(const DeleteFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetResponse)
    Q_DISABLE_COPY(DeleteFleetResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
