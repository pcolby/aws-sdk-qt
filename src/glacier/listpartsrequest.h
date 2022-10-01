// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTSREQUEST_H
#define QTAWS_LISTPARTSREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class ListPartsRequestPrivate;

class QTAWSGLACIER_EXPORT ListPartsRequest : public GlacierRequest {

public:
    ListPartsRequest(const ListPartsRequest &other);
    ListPartsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
