// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGEVIRTUALMACHINESRESPONSE_P_H
#define QTAWS_DESCRIBESTORAGEVIRTUALMACHINESRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DescribeStorageVirtualMachinesResponse;

class DescribeStorageVirtualMachinesResponsePrivate : public FSxResponsePrivate {

public:

    explicit DescribeStorageVirtualMachinesResponsePrivate(DescribeStorageVirtualMachinesResponse * const q);

    void parseDescribeStorageVirtualMachinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStorageVirtualMachinesResponse)
    Q_DISABLE_COPY(DescribeStorageVirtualMachinesResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
