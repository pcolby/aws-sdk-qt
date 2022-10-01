// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAREPOSITORYASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEDATAREPOSITORYASSOCIATIONRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DeleteDataRepositoryAssociationResponse;

class DeleteDataRepositoryAssociationResponsePrivate : public FSxResponsePrivate {

public:

    explicit DeleteDataRepositoryAssociationResponsePrivate(DeleteDataRepositoryAssociationResponse * const q);

    void parseDeleteDataRepositoryAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataRepositoryAssociationResponse)
    Q_DISABLE_COPY(DeleteDataRepositoryAssociationResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
