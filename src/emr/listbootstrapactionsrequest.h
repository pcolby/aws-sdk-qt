// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOOTSTRAPACTIONSREQUEST_H
#define QTAWS_LISTBOOTSTRAPACTIONSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListBootstrapActionsRequestPrivate;

class QTAWSEMR_EXPORT ListBootstrapActionsRequest : public EmrRequest {

public:
    ListBootstrapActionsRequest(const ListBootstrapActionsRequest &other);
    ListBootstrapActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBootstrapActionsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
