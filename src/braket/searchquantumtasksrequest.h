// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUANTUMTASKSREQUEST_H
#define QTAWS_SEARCHQUANTUMTASKSREQUEST_H

#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class SearchQuantumTasksRequestPrivate;

class QTAWSBRAKET_EXPORT SearchQuantumTasksRequest : public BraketRequest {

public:
    SearchQuantumTasksRequest(const SearchQuantumTasksRequest &other);
    SearchQuantumTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchQuantumTasksRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
