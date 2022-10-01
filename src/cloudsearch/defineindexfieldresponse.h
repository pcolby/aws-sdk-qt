// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEINDEXFIELDRESPONSE_H
#define QTAWS_DEFINEINDEXFIELDRESPONSE_H

#include "cloudsearchresponse.h"
#include "defineindexfieldrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineIndexFieldResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineIndexFieldResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DefineIndexFieldResponse(const DefineIndexFieldRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DefineIndexFieldRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineIndexFieldResponse)
    Q_DISABLE_COPY(DefineIndexFieldResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
