// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZECUTOVERREQUEST_H
#define QTAWS_FINALIZECUTOVERREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class FinalizeCutoverRequestPrivate;

class QTAWSMGN_EXPORT FinalizeCutoverRequest : public MgnRequest {

public:
    FinalizeCutoverRequest(const FinalizeCutoverRequest &other);
    FinalizeCutoverRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinalizeCutoverRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
