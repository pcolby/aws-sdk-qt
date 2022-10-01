// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSREQUEST_H
#define QTAWS_LISTAPPLICATIONVERSIONSREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class ListApplicationVersionsRequestPrivate;

class QTAWSM2_EXPORT ListApplicationVersionsRequest : public M2Request {

public:
    ListApplicationVersionsRequest(const ListApplicationVersionsRequest &other);
    ListApplicationVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationVersionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
