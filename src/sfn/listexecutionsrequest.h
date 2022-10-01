// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXECUTIONSREQUEST_H
#define QTAWS_LISTEXECUTIONSREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class ListExecutionsRequestPrivate;

class QTAWSSFN_EXPORT ListExecutionsRequest : public SfnRequest {

public:
    ListExecutionsRequest(const ListExecutionsRequest &other);
    ListExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExecutionsRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
