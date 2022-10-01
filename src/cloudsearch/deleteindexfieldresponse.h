// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXFIELDRESPONSE_H
#define QTAWS_DELETEINDEXFIELDRESPONSE_H

#include "cloudsearchresponse.h"
#include "deleteindexfieldrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteIndexFieldResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DeleteIndexFieldResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DeleteIndexFieldResponse(const DeleteIndexFieldRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIndexFieldRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIndexFieldResponse)
    Q_DISABLE_COPY(DeleteIndexFieldResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
