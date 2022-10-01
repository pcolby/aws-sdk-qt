// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTEPSREQUEST_H
#define QTAWS_LISTSTEPSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListStepsRequestPrivate;

class QTAWSEMR_EXPORT ListStepsRequest : public EmrRequest {

public:
    ListStepsRequest(const ListStepsRequest &other);
    ListStepsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStepsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
