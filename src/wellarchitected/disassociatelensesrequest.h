// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELENSESREQUEST_H
#define QTAWS_DISASSOCIATELENSESREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class DisassociateLensesRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT DisassociateLensesRequest : public WellArchitectedRequest {

public:
    DisassociateLensesRequest(const DisassociateLensesRequest &other);
    DisassociateLensesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLensesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
