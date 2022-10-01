// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCREENDATAREQUEST_H
#define QTAWS_GETSCREENDATAREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class GetScreenDataRequestPrivate;

class QTAWSHONEYCODE_EXPORT GetScreenDataRequest : public HoneycodeRequest {

public:
    GetScreenDataRequest(const GetScreenDataRequest &other);
    GetScreenDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetScreenDataRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
