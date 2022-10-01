// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCELERATORSRESPONSE_H
#define QTAWS_LISTACCELERATORSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listacceleratorsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListAcceleratorsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListAcceleratorsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListAcceleratorsResponse(const ListAcceleratorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAcceleratorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAcceleratorsResponse)
    Q_DISABLE_COPY(ListAcceleratorsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
