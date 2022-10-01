// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSREQUEST_H
#define QTAWS_LISTENVIRONMENTSREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class ListEnvironmentsRequestPrivate;

class QTAWSMWAA_EXPORT ListEnvironmentsRequest : public MwaaRequest {

public:
    ListEnvironmentsRequest(const ListEnvironmentsRequest &other);
    ListEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentsRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
