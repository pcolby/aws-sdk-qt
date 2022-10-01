// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAVIEWRESPONSE_H
#define QTAWS_CREATEDATAVIEWRESPONSE_H

#include "finspacedataresponse.h"
#include "createdataviewrequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateDataViewResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT CreateDataViewResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    CreateDataViewResponse(const CreateDataViewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataViewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataViewResponse)
    Q_DISABLE_COPY(CreateDataViewResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
