// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMACHINESREQUEST_H
#define QTAWS_LISTSTATEMACHINESREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class ListStateMachinesRequestPrivate;

class QTAWSSFN_EXPORT ListStateMachinesRequest : public SfnRequest {

public:
    ListStateMachinesRequest(const ListStateMachinesRequest &other);
    ListStateMachinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStateMachinesRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
