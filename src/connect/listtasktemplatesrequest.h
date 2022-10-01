// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKTEMPLATESREQUEST_H
#define QTAWS_LISTTASKTEMPLATESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListTaskTemplatesRequestPrivate;

class QTAWSCONNECT_EXPORT ListTaskTemplatesRequest : public ConnectRequest {

public:
    ListTaskTemplatesRequest(const ListTaskTemplatesRequest &other);
    ListTaskTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTaskTemplatesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
