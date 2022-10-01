// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGEVIRTUALMACHINESRESPONSE_H
#define QTAWS_DESCRIBESTORAGEVIRTUALMACHINESRESPONSE_H

#include "fsxresponse.h"
#include "describestoragevirtualmachinesrequest.h"

namespace QtAws {
namespace FSx {

class DescribeStorageVirtualMachinesResponsePrivate;

class QTAWSFSX_EXPORT DescribeStorageVirtualMachinesResponse : public FSxResponse {
    Q_OBJECT

public:
    DescribeStorageVirtualMachinesResponse(const DescribeStorageVirtualMachinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStorageVirtualMachinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorageVirtualMachinesResponse)
    Q_DISABLE_COPY(DescribeStorageVirtualMachinesResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
