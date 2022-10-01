// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWGRAPHREQUEST_H
#define QTAWS_GETDATAFLOWGRAPHREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetDataflowGraphRequestPrivate;

class QTAWSGLUE_EXPORT GetDataflowGraphRequest : public GlueRequest {

public:
    GetDataflowGraphRequest(const GetDataflowGraphRequest &other);
    GetDataflowGraphRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataflowGraphRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
