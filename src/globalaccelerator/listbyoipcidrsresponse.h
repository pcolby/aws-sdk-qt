// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYOIPCIDRSRESPONSE_H
#define QTAWS_LISTBYOIPCIDRSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listbyoipcidrsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListByoipCidrsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListByoipCidrsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListByoipCidrsResponse(const ListByoipCidrsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListByoipCidrsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListByoipCidrsResponse)
    Q_DISABLE_COPY(ListByoipCidrsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
