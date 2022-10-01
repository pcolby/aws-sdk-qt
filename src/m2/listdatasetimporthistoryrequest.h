// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTHISTORYREQUEST_H
#define QTAWS_LISTDATASETIMPORTHISTORYREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class ListDataSetImportHistoryRequestPrivate;

class QTAWSM2_EXPORT ListDataSetImportHistoryRequest : public M2Request {

public:
    ListDataSetImportHistoryRequest(const ListDataSetImportHistoryRequest &other);
    ListDataSetImportHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetImportHistoryRequest)

};

} // namespace M2
} // namespace QtAws

#endif
